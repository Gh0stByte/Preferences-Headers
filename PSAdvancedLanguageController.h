/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class PSSpecifier;

@interface PSAdvancedLanguageController : PSListItemsController {

	PSSpecifier* _checkedSpecifier;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)updateChecked:(id)arg1 ;
-(void)setLocaleLanguage:(id)arg1 specifier:(id)arg2 ;
@end

