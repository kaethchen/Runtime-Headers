@class NSArray, NSDate;

@interface LSDefaultApplicationQueryEntry : NSObject

@property (readonly, nonatomic) NSArray *windowOpenDates;
@property (readonly, nonatomic) NSDate *refreshDate;
@property (readonly, nonatomic, getter=isDefaultForCategory) BOOL defaultForCategory;
@property (readonly, nonatomic, getter=isOpenWindowGroupFull) BOOL openWindowGroupFull;

+ (id)createFromPlistRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)initWithWindowOpenDate:(id)a0 refreshDate:(id)a1 defaultForCategory:(BOOL)a2;
- (id)initWithWindowOpenDates:(id)a0 refreshDate:(id)a1 defaultForCategory:(BOOL)a2;
- (id)newestWindowOpenDate;
- (id)oldestWindowOpenDate;
- (id)plistRepresentation;
- (id)updatedEntryRotatingInWindowOpenDate:(id)a0 refreshDate:(id)a1 defaultForCategory:(BOOL)a2;
- (id)updatedEntryWithRefreshDate:(id)a0 defaultForCategory:(BOOL)a1;

@end
