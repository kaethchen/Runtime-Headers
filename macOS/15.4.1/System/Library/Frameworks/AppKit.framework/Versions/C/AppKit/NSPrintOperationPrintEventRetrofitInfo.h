@class NSDictionary;

@interface NSPrintOperationPrintEventRetrofitInfo : NSObject {
    NSDictionary *printSettings;
    BOOL showPrintPanel;
    id sender;
    id delegate;
    SEL didPrintSelector;
    void *contextInfo;
}

- (void)dealloc;
- (id)initWithSettings:(id)a0 showPrintPanel:(BOOL)a1 sender:(id)a2 delegate:(id)a3 didPrintSelector:(SEL)a4 contextInfo:(void *)a5;

@end
