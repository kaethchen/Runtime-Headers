@class NSArray, NSString;

@interface SFResultSectionsDidLoadFeedback : SFFeedback {
    void /* unknown type, empty encoding */ resultSections;
    void /* unknown type, empty encoding */ queryIdentifier;
}

@property (nonatomic, copy) NSArray *resultSections;
@property (nonatomic, copy) NSString *queryIdentifier;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResultSections:(id)a0 queryIdentifier:(id)a1;
- (id)initWithResultSections:(id)a0 queryString:(id)a1;

@end
