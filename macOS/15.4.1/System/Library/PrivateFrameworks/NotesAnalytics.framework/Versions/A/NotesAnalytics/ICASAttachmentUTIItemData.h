@class NSString, NSNumber;

@interface ICASAttachmentUTIItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *uti;
@property (readonly, nonatomic) NSNumber *countOfAttachments;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUti:(id)a0 countOfAttachments:(id)a1;

@end
