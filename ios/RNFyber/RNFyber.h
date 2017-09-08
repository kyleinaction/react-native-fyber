//
//  RNFyber.h
//  RNFyber
//
//  Created by Ben Yee <benyee@gmail.com> on 5/20/16.
//
#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif

@interface RNFyber : NSObject <RCTBridgeModule>
@end
