@class NSString, NSNumber;

@interface ICASSearchBufferArrayData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *searchStringLength;
@property (readonly, nonatomic) NSNumber *topHitCount;
@property (readonly, nonatomic) NSNumber *nonTopHitCount;
@property (readonly, nonatomic) NSNumber *isResultSelected;
@property (readonly, nonatomic) NSNumber *nonTopHitRawCount;
@property (readonly, nonatomic) NSNumber *attachmentHitCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSearchStringLength:(id)a0 topHitCount:(id)a1 nonTopHitCount:(id)a2 isResultSelected:(id)a3 nonTopHitRawCount:(id)a4 attachmentHitCount:(id)a5;

@end
