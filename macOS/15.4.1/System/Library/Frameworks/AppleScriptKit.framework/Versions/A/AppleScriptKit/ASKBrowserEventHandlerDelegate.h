@interface ASKBrowserEventHandlerDelegate : ASKEventHandlerDelegate

- (long long)browser:(id)a0 numberOfRowsInColumn:(long long)a1;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(long long)a2 column:(long long)a3;
- (void)browserDidScroll:(id)a0;
- (void)browserWillScroll:(id)a0;

@end
