/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreMISWatcher : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	int _misState;
	int _misReason;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)getMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
@end
