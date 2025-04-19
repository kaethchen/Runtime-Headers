@interface _ANSTViSegHQUtility : NSObject

+ (id)makeInputImagePixelBufferDescriptorForConfiguration:(id)a0 name:(id)a1 error:(id *)a2;
+ (unsigned long long)_tensorDataTypeForConfiguration:(id)a0;
+ (id)makeHiddenTensorDescriptorForConfiguration:(id)a0 name:(id)a1;
+ (id)makeKeyTensorDescriptorForConfiguration:(id)a0 name:(id)a1;
+ (id)makeMaskPixelBufferDescriptorForConfiguration:(id)a0 name:(id)a1 error:(id *)a2;
+ (id)makeMattingTensorDescriptorForConfiguration:(id)a0 name:(id)a1;
+ (id)makeProbTensorDescriptorForConfiguration:(id)a0 name:(id)a1;
+ (id)makeValueTensorDescriptorForConfiguration:(id)a0 name:(id)a1;

@end
