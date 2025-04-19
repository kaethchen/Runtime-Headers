@class NSString, NSNumber, NSDate;

@interface AMSMetricsIdentifierInfo : NSObject

@property BOOL crossDeviceSync;
@property (retain) NSString *idKey;
@property (retain) NSString *name;
@property (retain) NSString *storeUUID;
@property (retain) NSString *value;
@property (retain) NSDate *expires;
@property BOOL deleted;
@property (retain) NSDate *lastSync;
@property (retain) NSDate *modified;
@property (retain) NSDate *serverProvidedAt;
@property (retain, nonatomic) NSNumber *changeCounter;
@property (retain, nonatomic) NSNumber *changeCause;
@property (copy, nonatomic) NSString *previousValue;

+ (BOOL)bothDatesAreNilOr:(id)a0 equals:(id)a1;
+ (BOOL)bothStringsAreNilOr:(id)a0 equals:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualIgnoringLastSync:(id)a0;
- (void)populateDictionary:(id)a0 shouldEmitDiagnosticFields:(BOOL)a1 shouldEmitPreviousUserId:(BOOL)a2;
- (id)specializedFieldNameForFieldName:(id)a0;

@end
