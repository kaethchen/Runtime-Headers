@class NSArray, NSString, ATXHomeScreenPage;

@interface ATXHomeScreenStackConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfLeafIconSpots;
@property (nonatomic) BOOL allowsNewWidget;
@property (nonatomic) BOOL allowsSmartRotate;
@property (copy, nonatomic) NSArray *widgets;
@property (nonatomic) unsigned long long stackLayoutSize;
@property (nonatomic) long long coordinateRow;
@property (nonatomic) long long coordinateColumn;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) ATXHomeScreenPage *page;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)compactDescription;
- (void)_updateWidgetBackpointers;
- (void)assignWidgetSpaceCoordinateWithRow:(long long)a0 column:(long long)a1;
- (BOOL)isAppPredictionPanel;
- (BOOL)isPinnedSuggestionsWidget;
- (BOOL)isPinnedWidget;

@end
