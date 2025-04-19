@class NSDictionary, NSDate;

@interface SPHistoricalReport : NSObject

@property unsigned int type;
@property (retain) NSDate *timestamp;
@property (retain) NSDictionary *report;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
