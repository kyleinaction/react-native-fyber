//
//  RNFyberRewardedVideo.h
//  RNFyberRewardedVideo
//
//  Created by Ben Yee <benyee@gmail.com> on 11/14/16.
//
#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif
#import "RCTEventDispatcher.h"
#import "FyberSDK.h"

@interface RNFyberRewardedVideo : NSObject <RCTBridgeModule, FYBRewardedVideoControllerDelegate>
@end
