@class NSString, ICASNoteEditContext;

@interface ICASNoteEditData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASNoteEditContext *noteEditContext;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteEditContext:(id)a0;

@end
