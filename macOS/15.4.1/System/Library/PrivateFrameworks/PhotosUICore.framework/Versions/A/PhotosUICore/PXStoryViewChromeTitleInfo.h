@class NSString;

@interface PXStoryViewChromeTitleInfo : NSObject

@property (readonly, nonatomic) NSString *collectionTitle;
@property (readonly, nonatomic) NSString *collectionSubtitle;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) NSString *dateName;
@property (readonly, nonatomic) NSString *songName;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *subtitleSymbolName;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollectionTitle:(id)a0 collectionSubtitle:(id)a1 locationName:(id)a2 dateName:(id)a3 songName:(id)a4 artistName:(id)a5 title:(id)a6 subtitle:(id)a7 subtitleSymbolName:(id)a8;

@end
