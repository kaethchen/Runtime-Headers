@class NSString, ICASActionType;

@interface ICASAttachmentActionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASActionType *actionType;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (id)toDict;

@end
