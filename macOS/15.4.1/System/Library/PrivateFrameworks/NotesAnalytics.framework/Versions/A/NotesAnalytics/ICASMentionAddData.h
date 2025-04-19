@class NSString, NSNumber, ICASMentionAddApproach;

@interface ICASMentionAddData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *isExistingMention;
@property (readonly, nonatomic) ICASMentionAddApproach *mentionAddApproach;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithIsExistingMention:(id)a0 mentionAddApproach:(id)a1;

@end
