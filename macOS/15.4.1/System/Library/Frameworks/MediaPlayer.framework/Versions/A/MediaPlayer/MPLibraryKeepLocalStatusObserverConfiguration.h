@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject

@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
