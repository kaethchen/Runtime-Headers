@class NSComboBox;

@interface QCBonjourServicesUI : QCInspector {
    NSComboBox *typeComboBox;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateType:(id)a0;

@end
