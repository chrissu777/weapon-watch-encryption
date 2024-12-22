#include <string>

class S3Service {
    public:

    S3Service(); 

bool UploadFile(const std::string& bucketName,
                    const std::string& objectKey,
                    const std::string& filePath);
};