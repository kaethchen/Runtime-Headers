@class NSString;

@interface AMShellScriptAction : AMBundleAction

@property (readonly) BOOL remapLineEndings;
@property (readonly, copy) NSString *inputFieldSeparator;
@property (readonly, copy) NSString *outputFieldSeparator;

- (void)getData:(id)a0;
- (id)runWithInput:(id)a0 error:(id *)a1;

@end
