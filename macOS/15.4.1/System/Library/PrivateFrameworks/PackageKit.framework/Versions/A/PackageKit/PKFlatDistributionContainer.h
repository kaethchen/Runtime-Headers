@class NSString;

@interface PKFlatDistributionContainer : PKMutableDistributionContainer {
    NSString *_path;
}

- (void)dealloc;
- (BOOL)commitReturningError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (BOOL)setStringsData:(id)a0 forLocalization:(id)a1;
- (id)_resourceDataForKey:(id)a0;
- (id)initWithPath:(id)a0 forWriting:(BOOL)a1 error:(id *)a2;
- (BOOL)setDistributionFromContainer:(id)a0;
- (BOOL)setResourceData:(id)a0 forKey:(id)a1 forLocalization:(id)a2;
- (id)stringsDictionary;

@end
