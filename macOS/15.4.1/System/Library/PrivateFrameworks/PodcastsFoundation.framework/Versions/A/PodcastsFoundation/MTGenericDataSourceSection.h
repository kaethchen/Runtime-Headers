@interface MTGenericDataSourceSection : NSObject {
    void /* unknown type, empty encoding */ storedTitle;
    void /* unknown type, empty encoding */ shouldIncludeSeeAllBlock;
}

@property (nonatomic, copy) id /* block */ shouldIncludeSeeAllBlock;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
