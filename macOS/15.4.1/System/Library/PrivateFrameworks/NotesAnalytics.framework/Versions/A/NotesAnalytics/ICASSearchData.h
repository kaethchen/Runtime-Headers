@class NSString;

@interface ICASSearchData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *searchSessionID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSearchSessionID:(id)a0;

@end
