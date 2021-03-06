/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>

@class UITableView, UIView, UISearchBar, PSLocaleSelector, NSArray, PSRegion, NSString;

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	UITableView* _tableView;
	UIView* _contentView;
	UISearchBar* _searchBar;
	BOOL _searchMode;
	PSLocaleSelector* _localeSelector;
	NSArray* _filteredListContent;
	NSArray* _sections;
	NSArray* _regionsList;
	PSRegion* _currentRegion;

}

@property (nonatomic,retain) PSLocaleSelector * localeSelector;              //@synthesize localeSelector=_localeSelector - In the implementation block
@property (nonatomic,retain) NSArray * filteredListContent;                  //@synthesize filteredListContent=_filteredListContent - In the implementation block
@property (nonatomic,retain) NSArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * regionsList;                          //@synthesize regionsList=_regionsList - In the implementation block
@property (nonatomic,retain) PSRegion * currentRegion;                       //@synthesize currentRegion=_currentRegion - In the implementation block
@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setLocaleSelector:(PSLocaleSelector *)arg1 ;
-(id)_mainContentView;
-(PSLocaleSelector *)localeSelector;
-(void)updateChecked:(id)arg1 ;
-(void)setFilteredListContent:(NSArray *)arg1 ;
-(void)setRegionsList:(NSArray *)arg1 ;
-(void)setCurrentRegion:(PSRegion *)arg1 ;
-(NSArray *)regionsList;
-(void)reloadDataAndScrollToCheckedRegionAnimated:(BOOL)arg1 ;
-(void)loadRegions;
-(void)reloadSections;
-(NSArray *)filteredListContent;
-(PSRegion *)currentRegion;
-(id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2 ;
@end

