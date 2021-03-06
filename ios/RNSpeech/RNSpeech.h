//
//  RNSpeech.h
//  RNSpeech
//
//  Created by Alex on 6/5/17.
//  Copyright © 2017 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <Speech/Speech.h>

@interface RNSpeech : RCTEventEmitter <RCTBridgeModule, SFSpeechRecognizerDelegate>

@end
