@class NSData;

@interface EWSFileAttachmentType : EWSAttachmentType

@property (retain, nonatomic) NSData *Content;
@property (nonatomic) BOOL IsContactPhoto;
@property (nonatomic) BOOL IsContactPhotoSpecified;

+ (id)definition;

- (void).cxx_destruct;

@end
