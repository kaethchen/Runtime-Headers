@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (BOOL)enabled;
- (void).cxx_destruct;
- (id)identifier;
- (void)setEnabled:(BOOL)a0;
- (long long)state;
- (void)setState:(long long)a0;
- (BOOL)canBeDisabled;
- (BOOL)visible;
- (id)choice;
- (id)packageReferencesToInstall;
- (BOOL)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)initWithChoiceItems:(id)a0 title:(id)a1 identifier:(id)a2 canBeDisabled:(BOOL)a3;

@end
