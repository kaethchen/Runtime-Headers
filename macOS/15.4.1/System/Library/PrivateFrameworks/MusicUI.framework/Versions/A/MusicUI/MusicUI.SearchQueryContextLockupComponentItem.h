@interface MusicUI.SearchQueryContextLockupComponentItem : NSCollectionViewItem <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ reportAConcernSearchQueryContext;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ expandingText;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ disclaimer;
    void /* unknown type, empty encoding */ citation;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(long long)a2;
- (void)loadView;
- (void)viewWillLayout;

@end
