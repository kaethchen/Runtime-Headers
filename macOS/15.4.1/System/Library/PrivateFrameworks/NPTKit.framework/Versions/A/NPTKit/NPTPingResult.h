@class NSArray, NSString, NSDictionary, NSError;

@interface NPTPingResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *pings;
@property double minLatency;
@property double maxLatency;
@property double meanLatency;
@property double standardDeviation;
@property double percentLost;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *asDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)calculateStandardDeviation;
- (id)initWithPings:(id)a0 usingAddress:(id)a1;
- (void)populateFields;

@end
