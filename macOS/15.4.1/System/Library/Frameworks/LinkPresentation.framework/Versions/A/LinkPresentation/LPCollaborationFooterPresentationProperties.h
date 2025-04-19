@class NSString, NSPersonNameComponents, NSImage;

@interface LPCollaborationFooterPresentationProperties : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *initiatorName;
@property (copy, nonatomic) NSPersonNameComponents *initiatorNameComponents;
@property (copy, nonatomic) NSImage *glyphAttachmentImage;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;

@end
