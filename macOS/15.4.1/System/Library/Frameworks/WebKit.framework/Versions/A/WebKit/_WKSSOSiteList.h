@class NSString;

@interface _WKSSOSiteList : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    struct RetainPtr<NSArray<NSString *>> { void *m_ptr; } _siteList;
    struct RetainPtr<NSAlert> { void *m_ptr; } _alert;
    struct RetainPtr<NSTableView> { void *m_ptr; } _tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)initWithSiteList:(id)a0 withAlert:(struct RetainPtr<NSAlert> { void *x0; })a1 withTableView:(struct RetainPtr<NSTableView> { void *x0; })a2;
- (void)toggleTableViewContents:(id)a0;

@end
