@class MLModel;

@interface Image_Estimator_HEIF : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromInput_File_Size:(double)a0 Input_Height:(double)a1 Input_Entropy:(double)a2 Aspect_Ratio:(double)a3 Target_File_Size:(double)a4 Target_Max_Dimension_4032:(long long)a5 Target_Max_Dimension_3000:(long long)a6 Target_Max_Dimension_2048:(long long)a7 Target_Max_Dimension_1600:(long long)a8 Target_Max_Dimension_1280:(long long)a9 Target_Max_Dimension_1024:(long long)a10 Target_Max_Dimension_800:(long long)a11 Compression_Ratio:(double)a12 Input_H_x_W__NumOfPixels_:(double)a13 Target_Height:(double)a14 Target_Width:(double)a15 Input_log_NumOfPixels_:(double)a16 Ratio_of_NumOfPixels:(double)a17 Exponential_Entropy:(double)a18 error:(id *)a19;

@end
