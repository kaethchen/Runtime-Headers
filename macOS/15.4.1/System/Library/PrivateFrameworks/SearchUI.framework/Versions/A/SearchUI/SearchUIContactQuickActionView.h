@class SearchUIContactButtonItemGenerator, SearchUIContactButtonItem, NSString;

@interface SearchUIContactQuickActionView : NSView <CNContactQuickActionPresentation>

@property (weak) SearchUIContactButtonItemGenerator *generator;
@property (weak) SearchUIContactButtonItem *buttonItem;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *systemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
