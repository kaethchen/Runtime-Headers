@class NSScriptObjectSpecifier, NSScriptClassDescription, MCAttachment, NSString;

@interface MCAppleScriptAttachment : NSObject {
    NSString *_uuidString;
}

@property (retain, nonatomic) MCAttachment *attachment;
@property (retain, nonatomic) NSScriptObjectSpecifier *messageContainer;
@property (retain, nonatomic) NSScriptClassDescription *messageClassDescription;
@property (readonly, copy, nonatomic) NSString *uniqueID;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (id)fileSize;
- (BOOL)downloaded;
- (id)mimeType;
- (id)initWithMessage:(id)a0 attachment:(id)a1;
- (id)handleSaveAttachmentCommand:(id)a0;

@end
