@class NSString;

@interface FeedbackCore.FBKAttachmentAnnotation : NSObject {
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ localizedDescription;
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ _iconType;
    void /* unknown type, empty encoding */ additionalInfo;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
