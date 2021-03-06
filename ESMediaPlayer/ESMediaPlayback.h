//
//  ESMediaPlayback.h
//  FFmpegTest
//
//  Created by Elf Sundae on 8/16/13.
//  Copyright (c) 2013 www.0x123.com. All rights reserved.
//

#ifndef __ESMP_ESMediaPlayback_H
#define __ESMP_ESMediaPlayback_H

@protocol ESMediaPlayback

// Prepares the current queue for playback, interrupting any active (non-mixible) audio sessions.
// Automatically invoked when -play is called if the player is not already prepared.
- (BOOL)prepareToPlay:(__autoreleasing NSError **)error;

// Returns YES if prepared for playback.
@property (nonatomic, readonly) BOOL isPreparedToPlay;

// Plays items from the current queue, resuming paused playback if possible.
- (void)play;

// Pauses playback if playing.
- (void)pause;

// Ends playback. Calling -play again will start from the beginnning of the queue.
- (void)stop;

// The current playback time of the now playing item in seconds.
@property (nonatomic) NSTimeInterval currentPlaybackTime;

@end

#endif
