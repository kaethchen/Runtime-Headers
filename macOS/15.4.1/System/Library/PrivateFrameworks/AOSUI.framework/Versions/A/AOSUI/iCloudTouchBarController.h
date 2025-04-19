@class NSMutableDictionary, NSString, NSMutableOrderedSet, NSTouchBar, NSGroupTouchBarItem;

@interface iCloudTouchBarController : NSObject <NSTouchBarProvider>

@property (retain) NSTouchBar *iCloudTouchBar;
@property (retain) NSGroupTouchBarItem *buttonGroup;
@property (retain) NSMutableDictionary *buttonDictionary;
@property (retain, nonatomic) NSMutableOrderedSet *buttonIdentifiers;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithButtonDictionary:(id)a0 withOrderedIdentifiers:(id)a1;

@end
