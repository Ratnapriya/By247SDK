Pod::Spec.new do |s|
  s.name         = "By247SDK"
  s.version      = "1.7.0"
  s.summary      = "By247SDK for iOS"
  s.description  = "By247SDK"
  s.homepage     = "https://github.com/Ratnapriya/By247SDK"
  s.license	     = { :type => 'OpenSSL (OpenSSL/SSLeay)', :file => 'LICENSE.txt' }
  s.source       = { :git => "https://github.com/Ratnapriya/By247SDK", :tag => "#{s.version}" }

  s.authors       =  {'Ratnapriya Saripalli' => 'ratnapriya.saripalli@247.ai'}
  
  s.ios.deployment_target = '6.0'
  s.ios.source_files        = 'include/By247SDK/**/*.h'
  s.ios.public_header_files = 'include/By247SDK/**/*.h'
  s.ios.header_dir          = 'openssl'
  s.ios.preserve_paths      = 'lib/libBy247SDK.a'
  s.ios.vendored_libraries  = 'lib/libBy247SDK.a'

  s.libraries = 'By247SDK'
  s.requires_arc = true
end
