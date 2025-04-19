@class NSString, GEOPDResultRefinementMetadata;

@interface GEOResultRefinementTime : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) GEOPDResultRefinementMetadata *metadata;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isNextDay;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementTime;
- (id)initWithDisplayName:(id)a0 timeStamp:(double)a1 metadata:(id)a2 isSelected:(BOOL)a3 isNextDay:(BOOL)a4;
- (id)initWithResultRefinementTime:(id)a0;

@end
