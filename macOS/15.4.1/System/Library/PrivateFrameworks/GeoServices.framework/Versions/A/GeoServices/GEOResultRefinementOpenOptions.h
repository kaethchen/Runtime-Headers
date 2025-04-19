@class GEOResultRefinementToggle, NSString, GEOResultRefinementTime, NSNumber;

@interface GEOResultRefinementOpenOptions : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) GEOResultRefinementTime *openAt;
@property (copy, nonatomic) GEOResultRefinementToggle *openNow;
@property (readonly, nonatomic) NSNumber *selectionSequenceNumber;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementOpenOptions;
- (id)initWithDisplayName:(id)a0 openNow:(id)a1 openAt:(id)a2;
- (id)initWithOpenOptions:(id)a0;

@end
