@class NSString, NSNumber;

@interface ICASAudioAttachmentData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *audioAttachmentID;
@property (readonly, nonatomic) NSNumber *transcriptCharacterCount;
@property (readonly, nonatomic) NSNumber *summaryCharacterCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAudioAttachmentID:(id)a0 transcriptCharacterCount:(id)a1 summaryCharacterCount:(id)a2;

@end
