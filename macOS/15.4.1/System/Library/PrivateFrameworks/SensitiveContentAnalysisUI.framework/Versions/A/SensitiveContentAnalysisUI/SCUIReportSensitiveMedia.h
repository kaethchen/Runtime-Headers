@class NSString, NSURL, NSDate, NSNumber;

@interface SCUIReportSensitiveMedia : NSObject

@property (readonly) NSURL *url;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *UTIType;
@property (readonly, copy) NSDate *dateReceived;
@property (readonly, copy) NSNumber *isSensitive;
@property (readonly) BOOL wasImpetusOfReport;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 UTIType:(id)a1 identifier:(id)a2 dateReceived:(id)a3 isSensitive:(id)a4 wasImpetusOfReport:(BOOL)a5;

@end
