/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfiguration : NSObject {


}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)dealloc;
-(unsigned char)synchronizeForWriting:(BOOL)arg1 ;
-(void)cleanupPrefs;
-(CFStringRef)dataServiceID;
-(CFStringRef)voicemailServiceID;
-(CFStringRef)getServiceIDForPDPContext:(unsigned)arg1 ;
-(id)interfaceConfigurationValueForKey:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setInterfaceConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfiguration:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setProtocolConfiguration:(id)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfigurationValueForKey:(CFStringRef)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(void)setProtocolConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 protocolType:(CFStringRef)arg3 serviceID:(CFStringRef)arg4 ;
@end

