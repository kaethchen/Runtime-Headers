@class NSArray;

@interface SLSBridgedResetWindowsOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *windows;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindows:(id)a0;
- (void)invokeFallback;

@end
