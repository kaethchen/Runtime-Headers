@class NSString, NSDictionary, NSURL, WBSHistoryItem, NSNumber;

@interface TopSite : NSObject <FrequentlyVisitedSite>

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) BOOL hasStaticTitle;
@property (weak, nonatomic) WBSHistoryItem *historyItem;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *suggestionIdentifier;

@end
