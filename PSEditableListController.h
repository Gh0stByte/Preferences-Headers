/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PSEditableListController : PSListController {

	BOOL _editable;
	BOOL _editingDisabled;

}
-(void)_updateNavigationBar;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)editable;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)didLock;
-(void)editDoneTapped;
-(id)_editButtonBarItem;
-(void)_setEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)performDeletionActionForSpecifier:(id)arg1 ;
-(void)setEditingButtonHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditButtonEnabled:(BOOL)arg1 ;
@end
