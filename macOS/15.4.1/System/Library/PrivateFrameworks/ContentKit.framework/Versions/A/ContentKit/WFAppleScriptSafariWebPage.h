@class NSData, NSAppleEventDescriptor;

@interface WFAppleScriptSafariWebPage : WFSafariWebPage {
    NSData *_selectionHTML;
}

@property (readonly, nonatomic) NSAppleEventDescriptor *specifier;

+ (BOOL)supportsSecureCoding;
+ (id)documentWithSpecifier:(id)a0;
+ (id)safariApplication;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)document;
- (id)initWithSpecifier:(id)a0;
- (id)doJavaScript:(id)a0;
- (id)initWithFrontmostDocument;
- (id)initWithSpecifier:(id)a0 URL:(id)a1 pageTitle:(id)a2 documentHTML:(id)a3;
- (id)selectionHTML;

@end
