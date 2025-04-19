@class NSString, NSImage;

@interface ACDEAuthenticationRequestImpl : ACMBaseAuthenticationRequestImpl {
    NSString *_signInDialogTitle;
    NSString *_signInDialogDescription;
    NSImage *logoImage;
    BOOL _forceAppModal;
}

@end
