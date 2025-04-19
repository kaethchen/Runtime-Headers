@class NSString, NSArray;

@interface UINSDocumentBrowserAction : NSObject <UINSDocumentBrowserAction>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) long long availability;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSArray *supportedContentTypes;
@property (nonatomic) BOOL supportsMultipleItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 localizedTitle:(id)a1 availability:(long long)a2 handler:(id /* block */)a3;

@end
