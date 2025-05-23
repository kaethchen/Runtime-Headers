@class NSString, ICASNoteCreateApproach;

@interface ICASNoteCreateData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASNoteCreateApproach *noteCreateApproach;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteCreateApproach:(id)a0;

@end
