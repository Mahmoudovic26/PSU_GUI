# Copyright (c) 2018(-2025) STMicroelectronics.
# All rights reserved.
#
# This file is part of the TouchGFX 4.25.0 distribution.
#
# This software is licensed under terms that can be found in the LICENSE file in
# the root directory of this software component.
# If no LICENSE file comes with this software, it is provided AS-IS.
#
###############################################################################/
class FontCacheHpp < Template
  def input_path
    File.join(root_dir,'Templates','FontCache.hpp.temp')
  end
  def output_path
    '/include/fonts/FontCache.hpp'
  end
  def output_filename
    File.join(@output_directory, output_path)
  end
  def run
    if !File::exists?(output_filename)
      #generate FontCache.hpp
      super
    end
  end
end
