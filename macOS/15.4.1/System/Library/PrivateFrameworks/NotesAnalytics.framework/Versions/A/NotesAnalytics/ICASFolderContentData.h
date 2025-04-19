@class NSString, NSNumber;

@interface ICASFolderContentData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *noteCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteCount:(id)a0;

@end
