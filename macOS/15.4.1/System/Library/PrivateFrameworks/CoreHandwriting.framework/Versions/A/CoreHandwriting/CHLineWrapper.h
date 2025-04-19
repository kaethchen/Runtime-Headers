@class NSString, CRLineWrapper;

@interface CHLineWrapper : NSObject <CHLineWrapperProviding> {
    CRLineWrapper *_lineWrapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)lineWrappingResultForGroups:(id)a0 options:(id)a1 error:(id *)a2;

@end
